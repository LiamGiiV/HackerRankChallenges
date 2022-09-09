import math
import os
import random
import re
import sys
#don't know why this submission needs these imports


def Challenge_2():
    input = int(input().strip())
    if input % 2 != 0:
        # odd number
        print("Weird")
    else:
        # even numbers
        if input >= 2 and input <= 5:
            print("Not Weird")
        elif input >= 6 and input <= 20:
            print("Weird")
        elif input > 20:
            print("Not Weird")
