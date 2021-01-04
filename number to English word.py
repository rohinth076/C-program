class Solution:
    def numberToWords(self, n: int) -> str:
        def god(o,t,h):
            a = ["","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"]
            b = ["","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"]
            c = ["","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"]
            d = "Hundred"
            s = ""
            if(h!=0):
                s =s +" "+a[h]+" "+d
            if(t==0 and o!=0):
                s =s +" "+ a[o]
            elif(t!=0 and o==0):
                s =s +" "+ b[t]
            elif(t==1 and o!=0):
                s =s+ " "+ c[o]
            elif(t!=0 and o!=0):
                s = s +" "+b[t]+" "+a[o]
            return s.strip()
            
        a = [0,0,0,0,0,0,0,0,0,0,0,0]
        i = 0  
        s =""
        if(n==0):
            return "Zero"
        while(n!=0):
            a[i] = n%10
            i += 1
            n = n//10
        s += god(a[9],a[10],a[11])
        if(a[9]!=0 or a[10]!=0 or a[11]!=0):
            s += " Billion "
        s += god(a[6],a[7],a[8])
        if(a[6]!=0 or a[7]!=0 or a[8]!=0):
            s += " Million "
        s += god(a[3],a[4],a[5])
        if(a[3]!=0 or a[4]!=0 or a[5]!=0):
            s += " Thousand "
        s += god(a[0],a[1],a[2])
        
        return s.strip()

s = Solution()
n = int(input('Enter a number'))
print(s.numberToWord(n))
        
        
            
        
        
