from sys import argv
from os.path import exists

script, from_file, to_file = argv

print "Copying from {} to {}".format(from_file, to_file)
print "Ready, hit RETURN (or ENTER) to continue, CTRL-C to abort."
raw_input()

open(to_file, 'w').write(open(from_file).read())

print "Alright, all done."
