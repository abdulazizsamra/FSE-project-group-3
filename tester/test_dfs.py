from io import StringIO
import subprocess

from unittest import TestCase

class BasicTestCase(TestCase):
    def test_valid_input1(self):
        inp_path = './testcases/input_2.txt'
        f_in = open(inp_path,'r')
        result = subprocess.run(['./depth_first_search_executable'],stdin=f_in,stdout=subprocess.PIPE,stderr=subprocess.PIPE)
        output = result.stdout.decode().strip().splitlines()[3:]
        f_out = open('./testcases/ref_2.txt','r')
        ref = f_out.read().strip().splitlines()
        self.assertEqual(len(output),len(ref))
        if len(output) == len(ref):
            for ol, rl in zip(output,ref):
                self.assertEqual(ol.strip(), rl.strip())
        f_in.close()
        f_out.close()


