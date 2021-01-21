Public Class column
    Public x, y As Single '坐标‘
    Public width, height As Single '尺寸'

    Private zhuzi_top As Image = Image.FromFile("img/column上.png") '引入柱子’
    Private zhuzi_bottom As Image = Image.FromFile("img/column下.png")
    Private jiange As Single = 140 '两个柱子上下的间隔'

    Public Sub New(ByVal x)
        Me.x = x : Me.y = (-200 - -470 + 1) * Rnd() + -470 'y坐标随机产生'
        width = zhuzi_top.Width * 0.99F : height = zhuzi_top.Height * 0.99F
    End Sub


    Public Function draw(ByVal e As PaintEventArgs)
        e.Graphics.DrawImage(zhuzi_top, x, y, width, height) '绘制上方的柱子'
        e.Graphics.DrawImage(zhuzi_bottom, x, y + height + jiange, width, height) '绘制下方柱子'
    End Function

    '让柱子移动‘
    Public Function run()
        x -= Form1.move_speed
        If x + height < 432 Then
            x = 432
            '' Me.y = (-200 - -470 + 1) * Rnd() + -470 'y坐标随机产生'
        End If

        '判断玩家是否撞柱子
        If player.x + player.width > x And player.x < x + width And Not (player.y > y + height And player.y + player.height < y + height + jiange) And player.live Then
            player.live = False
            MsgBox("game over！")
        End If
    End Function
End Class
