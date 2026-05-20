import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ambroise/hunav_ws/install/hunav_behavior_tree_generator'
