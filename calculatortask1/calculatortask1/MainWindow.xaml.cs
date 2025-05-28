using System;
using System.Windows;
using System.Windows.Controls;

namespace WpfCalculator
{
    public partial class MainWindow : Window
    {
        public MainWindow() => InitializeComponent();

        private double GetNumber(TextBox box) => double.TryParse(box.Text, out double n) ? n : 0;

        private void Add_Click(object sender, RoutedEventArgs e)
        {
            Result.Content = (GetNumber(Input1) + GetNumber(Input2)).ToString();
        }

        private void Sub_Click(object sender, RoutedEventArgs e)
        {
            Result.Content = (GetNumber(Input1) - GetNumber(Input2)).ToString();
        }

        private void Mul_Click(object sender, RoutedEventArgs e)
        {
            Result.Content = (GetNumber(Input1) * GetNumber(Input2)).ToString();
        }

        private void Div_Click(object sender, RoutedEventArgs e)
        {
            double b = GetNumber(Input2);
            Result.Content = b == 0 ? "Cannot divide by 0" : (GetNumber(Input1) / b).ToString();
        }
    }
}