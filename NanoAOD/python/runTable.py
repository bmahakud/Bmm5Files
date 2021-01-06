import os
for num in range(11,15):
   command = "cmsRun RunIIAutumn18NanoAOD.py %s"%(str(num))
   print (command)
   os.system(command)




