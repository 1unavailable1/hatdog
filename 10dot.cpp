using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
        Console.WriteLine($"\n Process ID is: {Process.GetCurrentProcess().Id}");

        Process child = Process.Start("whoami");
        
        if (child != null)
        {
            child.WaitForExit();
        }
        else
        {
            Console.WriteLine("fork failed");
        }
    }
}
