def prin(dic):
    print(f"china==>{dic.get('china')}")
    print(f"india==>{dic.get('india')}")
    print(f"usa==>{dic.get('usa')}")
    print(f"pakistan==>{dic.get('pakistan')}")


dic={"china":143,"india":136,"usa":32,"pakistan":2}
x=input("enter your input ---->(print,add,remve,query)")
if x=="print":
    prin(dic)
if x=="add":
    c=input("enter the country you want to add")
    if c in dic:
        print("already present")
    else:
        p=int(input("enter the population"))
        dic[c]=p
        print(dic)
if x=="remove":
    r=input("enter the country you want to remove")
    if r in dic:
        dic.pop(r)
        prin(dic)
    else:
        print("country does not exist")
if x=="query":
    q=input("which country you want to query")
    print(dic["q"])