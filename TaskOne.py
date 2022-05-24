import subprocess

process= subprocess.Popen( ('ls', '-l', '/tmp'), stdout=subprocess.PIPE)

for line in process.stdout:
        pass

subprocess.call( ('ps', '-l') )
process.wait()
print ("Wait\n")
subprocess.call( ('ps', '-l') )
