def calculate(shape):
   
    
    
    if shape=="rectangle":
        l=float(input("enter the length="))
        br=float(input("enter the breadth="))
        rec=l*br
        return rec
    else:
        b=float(input("enter the base="))
        h=float(input("enter the height="))
        t=1/2*(b*h)
        return t

    



if __name__=='__main__':
    shape=input("enter the shape=")
    if shape not in ["triangle","rectangle"]:
        shape="traingle"
    a=calculate(shape)
    print(a)
    