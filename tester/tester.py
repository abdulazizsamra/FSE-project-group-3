import sys
import subprocess

def test_executable(exe_path,input_file, output_file):
    if exe_path.startswith('/'):
        exe_path = exe_path[1:]
    command = f"{exe_path} {input_file} {output_file}"
    result = subprocess.run(command.split(), stderr=subprocess.PIPE)
    print(result.stderr)
    
