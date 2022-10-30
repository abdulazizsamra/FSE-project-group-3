import sys
import subprocess

def test_executable(exe_path,input_file, output_file):
    if exe_path.startswith('/'):
        exe_path = exe_path[1:]
    input_content = open(input_file,'r').read()
    result = subprocess.run(command.split(), stdout = subprocess.PIPE ,stderr=subprocess.PIPE)
    return result.stdout, result.stderr

    
