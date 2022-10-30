from io import StringIO
import sys

from tester.tester import test_executable
import subprocess

from unittest import TestCase
from unittest.mock import patch 

class TestExecutableTestCase(TestCase):
    def test_valid_input1(self):
        inp_path = './testcases/input_1.txt'
        outp_path = './testcases/output_1.txt'
        exe_path = './sample_executable/capitalizer.py'
        test_executable(exe_path,
                inp_path,
                outp_path)
        output = open('./testcases/output_1.txt','r').read()
        ref = open('./testcases/ref_1.txt','r').read()
        self.assertEqual(output,ref)


class MockMainTestCase(unittest.TestCase):
    @patch('sys.stdout', new_callable=StringIO)
    @patch('sys.stdin', new_callable=StringIO)
    def test_valid1(self,mock_in,mock_out):
        input_content = open('./testcases/input_2.txt','r').read()
        mock_in.write(input_content)
        mock_in.seek(0)
        result = subprcess.run(['main.exe'],stderr=subprocess.PIPE)
        mock_out.seek(0)
        output = mock_out.read()
        expected_output = open('./testcases/ref_2.txt','r').read()
        self.assertEqual(output, expected_output)

