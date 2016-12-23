from sys import argv
from os.path import exists

script, from_file, to_file = argv

print "Copying from {} to {}".format(from_file, to_file)

# We could do these two on one line, how?
indata = open(from_file).read()

print "Ready, hit RETURN (or ENTER) to continue, CTRL-C to abort."
raw_input()

out_file = open(to_file, 'w')
out_file.write(indata)

print "Alright, all done."

out_file.close()
