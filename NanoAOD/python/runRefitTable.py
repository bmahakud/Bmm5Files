import os
for num in range(25,28):
   command = "cmsRun RunIIAutumn18NanoAODRefitTable.py %s"%(str(num))
   print (command)
   os.system(command)



