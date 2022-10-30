from io import StringIO
import subprocess

from unittest import TestCase

class BasicTestCase(TestCase):
    def feed_input(self, inp_path):
        # This function read input file and pass it to the executable, then return a list of output lines
        f_in = open(inp_path,'r')
        result = subprocess.run(['./depth_first_search_executable'],stdin=f_in,stdout=subprocess.PIPE,stderr=subprocess.PIPE)
        errors = result.stderr.decode().strip()
        output = result.stdout.decode().strip().splitlines()[3:] # Execluding Prompts
        f_in.close()
        return output, errors

    def test_valid_input(self):
        inp_path = './testcases/input_2.txt'
        f_out = open('./testcases/ref_2.txt','r')
        output, errors = self.feed_input(inp_path)
        ref = f_out.read().strip().splitlines()
        self.assertEqual(len(errors),0,'Execution Errors!')
        self.assertEqual(len(output),len(ref),'number of propagation steps is not correct')
        if len(output) == len(ref):
            for ol, rl in zip(output,ref):
                self.assertEqual(ol.strip(), rl.strip(),'visited state mismatch')
        f_out.close()

    def test_invalid_input(self):
        inp_path = './testcases/input_3.txt'
        f_out = open('./testcases/ref_3.txt','r')
        output, errors = self.feed_input(inp_path)
        ref = f_out.read().strip().splitlines()
        self.assertNotEqual('',errors, 'could not detect error even though they exist!')
        f_out.close()

    def test_valid_input_loop(self):
        inp_path = './testcases/input_4.txt'
        f_out = open('./testcases/ref_4.txt','r')
        output, errors = self.feed_input(inp_path)
        ref = f_out.read().strip().splitlines()
        self.assertEqual(errors,'','Execution Errors')
        self.assertEqual(len(output),len(ref),'number of propagation steps is not correct')
        if len(output) == len(ref):
            for ol, rl in zip(output,ref):
                self.assertEqual(ol.strip(), rl.strip(),'visited state mismatch')
        f_out.close()


