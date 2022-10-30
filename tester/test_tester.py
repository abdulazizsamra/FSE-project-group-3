from io import StringIO
from tester.tester import test_executable

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
