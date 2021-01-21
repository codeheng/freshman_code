Public Class Form1

    Private Sub Label2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Label2.Click

    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        TextBox1.Text = " "
        TextBox2.Text = " "
        TextBox3.Text = " "

    End Sub

    Private Sub jia_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles jia.Click
        TextBox3.Text = Val(TextBox1.Text) + Val(TextBox2.Text)
    End Sub

    Private Sub jian_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles jian.Click
        TextBox3.Text = Val(TextBox1.Text) - Val(TextBox2.Text)
    End Sub

    Private Sub cheng_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles cheng.Click
        TextBox3.Text = Val(TextBox1.Text) * Val(TextBox2.Text)
    End Sub

    Private Sub chu_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles chu.Click
        TextBox3.Text = Val(TextBox1.Text) / Val(TextBox2.Text)
    End Sub

    Private Sub ComboBox1_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ComboBox1.SelectedIndexChanged
        Dim c As Char
        c = ComboBox1.Text
        Select Case c
            Case "+"
                TextBox3.Text = Val(TextBox1.Text) + Val(TextBox2.Text)
            Case "-"
                TextBox3.Text = Val(TextBox1.Text) - Val(TextBox2.Text)
            Case "*"
                TextBox3.Text = Val(TextBox1.Text) * Val(TextBox2.Text)
            Case "/"
                TextBox3.Text = Val(TextBox1.Text) / Val(TextBox2.Text)
        End Select
    End Sub
End Class
