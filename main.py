import tkinter as tk
import subprocess


def run_command():
    program = text_field.get("1.0", 'end-1c')

    with open("ExempleJava.txt", "w") as f:
        f.write(program)
    result = subprocess.run(['./myJavaCompiler', 'ExempleJava.txt'], stderr=subprocess.PIPE)
    result_field.insert(tk.END, result)


root = tk.Tk()
root.title("Java Compiler")

text_label = tk.Label(root, text="Enter Program")
text_label.pack()

text_field = tk.Text(root, width=80, height=30)
text_field.pack()

run_button = tk.Button(root, text="COMPILE", command=run_command)
run_button.pack()

result_label = tk.Label(root, text="Output:")
result_label.pack()

result_field = tk.Text(root)
result_field.pack()

root.mainloop()
