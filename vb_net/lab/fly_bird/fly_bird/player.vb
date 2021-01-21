Public Class player
    Public Shared x, y As Single '小鸟坐标'
    Public Shared width, height As Single '小鸟尺寸'
    Public drop_speed As Single = 1.0F '小鸟当前下落速度'
    Public Shared zhongli As Single = 0.25F '设置重力，让小鸟看起来是自然下落'
    Public Shared live As Boolean = True '小鸟生命值'

    Private imglist As List(Of Image) = New List(Of Image) '小鸟集合'
    Private index As Integer = 0
    Private time As Integer = 0 '通过计时器控制小鸟翅膀扇动' 

    Public Sub New(ByVal x As Single, ByVal y As Single)
        For i = 0 To 7
            imglist.Add(Image.FromFile("img/" & i & ".png"))
        Next

        player.x = x : player.y = y '设置小鸟的坐标'
        player.width = imglist(0).Width * 0.72F : player.height = imglist(0).Height * 0.72F
    End Sub

    Public Function draw(ByVal e As System.Windows.Forms.PaintEventArgs) '画小鸟的方法’
        e.Graphics.DrawImage(imglist(index), x, y, width, height)
    End Function

    Public Function run() '让小鸟翅膀动起来的方法'
        '翅膀扇动变慢'
        time += 1
        If time > 6 Then
            time = 0
            index += 1
            If index > 7 Then
                index = 0
            End If
        End If

        '小鸟下落‘
        If drop_speed < 8 Then
            drop_speed += zhongli
        End If
        y += drop_speed
    End Function
End Class
