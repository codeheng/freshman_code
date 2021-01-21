Public Class Form1
    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        IO.Directory.SetCurrentDirectory(AppDomain.CurrentDomain.BaseDirectory)
        picMain.SizeMode = PictureBoxSizeMode.StretchImage
        picMain.Image = New Bitmap("test.jpg")
    End Sub

    Private Sub picMain_MouseDown(ByVal sender As Object, ByVal e As System.Windows.Forms.MouseEventArgs) Handles picMain.MouseDown
        Dim myImg As New Bitmap(picMain.Width, picMain.Height)
        Dim g As Graphics = Graphics.FromImage(myImg)
        g.DrawImage(picMain.Image, New Rectangle(New Point(0, 0), myImg.Size), New Rectangle(New Point(0, 0), picMain.Image.Size), GraphicsUnit.Pixel)
        picColor.BackColor = myImg.GetPixel(e.X, e.Y)
        txtMsg.Text = Color.BackColor.ToString
    End Sub

    Private Function picMain() As Object
        Throw New NotImplementedException
    End Function

    Private Function picColor() As Object
        Throw New NotImplementedException
    End Function

    Private Function txtMsg() As Object
        Throw New NotImplementedException
    End Function

End Class
