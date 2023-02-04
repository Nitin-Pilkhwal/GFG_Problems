#User function Template for python3

class Solution:

    def zigZag(self,arr, n):
        # code here
        for i in range(n-1):

           if i%2==0 and arr[i]>arr[i+1]:

               arr[i],arr[i+1]=arr[i+1],arr[i]

           elif i%2!=0 and arr[i]<arr[i+1]:

               arr[i],arr[i+1]=arr[i+1],arr[i]
        return arr