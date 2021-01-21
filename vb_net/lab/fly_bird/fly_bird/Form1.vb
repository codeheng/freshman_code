Public Class Form1
    Private background As Image = Image.FromFile("img/bg.png") '背景图片'
    Private ground As Image = Image.FromFile("img/ground.png") '地面’
    Private over As Image = Image.FromFile("img/gameover.png") '游戏结束画面显示'
    Private start As Image = Image.FromFile("img/start.png") '游戏开始画面显示' 

    Private ground_x As Single = 0.0F
    Private ground_y As Single = 498.0F
    Private zhuzi2 As column '第二个柱子‘

    Public Shared move_speed As Single = 1.0F '用户当前移动速度'
    Public if_start As Boolean = False '是否游戏画面开始'
    Public time As Integer = 0

    Private zhuzi1 As column = New column(400) '第一个柱子'  上限:-470,下限-200
    Private play As player = New player(40, 80) '创建小鸟对象'
    Public Sub New()

        ' 此调用是设计器所必需的。
        InitializeComponent()

        ' 在 InitializeComponent() 调用之后添加任何初始化。
        Me.SetStyle(ControlStyles.OptimizedDoubleBuffer Or ControlStyles.UserPaint Or ControlStyles.AllPaintingInWmPaint, True) '防止画面闪烁'
        Me.UpdateStyles()
        Me.Size = New Drawing.Size(432, 644 + 38) '设置窗体尺寸, 38 表示标题的高度'

        zhuzi2 = New column(300 + (432 + zhuzi1.width) / 2)

    End Sub

    '单击事件，鼠标松开就会触发'
    Private Sub Form1_MouseUp(ByVal sender As Object, ByVal e As System.Windows.Forms.MouseEventArgs) Handles Me.MouseUp
        If player.live = False Then
            player.live = True '让小鸟复活'
            '初始化’
            play.drop_speed = -5.0F
            move_speed = 1.0F
            zhuzi1.x = 400 : zhuzi2.x = 400 + (432 + zhuzi1.width) / 2
            time = 0
        Else
            play.drop_speed = -3.0F
        End If

        If if_start = False Then ' 如果游戏没开始，就等待用户点击开始 ’
            if_start = True
        End If

    End Sub

    Private Sub Form1_Paint(ByVal sender As Object, ByVal e As System.Windows.Forms.PaintEventArgs) Handles Me.Paint
        e.Graphics.DrawImage(background, 0, 0, background.Width, background.Height) '绘制背景'

        zhuzi1.draw(e) : zhuzi2.draw(e) '绘制柱子'

        e.Graphics.DrawImage(ground, ground_x, ground_y, ground.Width * 0.95F, ground.Height * 0.95F) '绘制地面’
        play.draw(e) '画小鸟'
        If player.live = False Then
            e.Graphics.DrawImage(over, 0, 0, background.Width, background.Height) '绘制游戏结束菜单'
        End If

        If if_start = False Then
            e.Graphics.DrawImage(start, 0, 0, background.Width, background.Height) '绘制游戏开始时界面 '
        End If

    End Sub

    Private Sub Timer1_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Timer1.Tick
        If player.live And if_start Then '如果小鸟或者并且游戏开始 '

            '让地面移动'
            ground_x -= move_speed
            If ground_x < -67.8F Then '到头之后，返回0，继续移动 ’
                ground_x = 0
            End If

            '让小鸟翅膀动起来'
            play.run()

            '让柱子移动'
            zhuzi1.run()
            zhuzi2.run()

            '判断小鸟是否落地‘
            If player.y + player.height > ground_y And player.live Then
                player.live = False
                MsgBox("你死了!")
            End If

            '让小鸟速度渐渐增加'
            If time > 100 Then
                time = 0
                If move_speed < 3.0F Then
                    move_speed += 0.5F
                End If
            End If

        End If

        Me.Refresh() '刷新paint方法'
    End Sub

End Class
