import subprocess
data=subprocess.check_output(['netsh','wlan','show','profiles']).decode('utf-8',errors="backshlashreplace").split('\n')
profiles=[i.split(":")[1][1:-1]for i in data if "All User Prfoles" in i]
for i in profiles:
    try:
        result=subprcess.check_output(['netsh','wlan','show','profiles','i','key=clear']).decode('utf-8',errors="backshlashreplace").split('\n')
        result=[b.split(":")[1][1:-1]for b in result if "Key Content" in b]
        try:
            print("{:<30}| {:<}".format(i,result[0]))
        except IndexError:
            print("{:<30}| {:<}".format(i,""))
    except subprocess.CalledProcessError:
        print("{:<30}| {:<}".format(i,"ENCCODNG ERROR"))
input("")