import os

for a in range(1,16):
   command = "cmsRun RunIIAutumn18NanoAOD.py %s"%(a)
   print ("Running......: ",command)
   os.system(command) 






















