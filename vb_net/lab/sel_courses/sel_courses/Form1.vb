Public Class Form1

    Private Sub Timer1_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Timer1.Tick
        If PictureBox1.Location.X < 150 Then
            PictureBox1.Location = New Point(PictureBox1.Location.X + 1, PictureBox1.Location.Y)
        Else
            Timer1.Stop()

        End If

    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If (True) Then
            Timer1.Start()
            TextBox1.Visible = False
            TextBox2.Visible = False
            ComboBox1.Visible = False
            Button1.Visible = False
            Button2.Visible = False
            Label1.Visible = False
            Label2.Visible = False
            Label3.Visible = False
        End If
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        TextBox1.Text = " "
        TextBox2.Text = " "
        ComboBox1.Text = " "
    End Sub
End Class
