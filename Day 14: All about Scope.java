	Difference(int[] a)
        {
        elements = a;
    }
public void computeDifference()
    {
    for(int i=0;i<elements.length-1;i++)
        {
        for(int j=i+1; j<elements.length; j++){
       int diff = elements[j]-elements[i];
        diff = diff<0? -1*diff : diff;
        
        maximumDifference = maximumDifference<diff? diff : maximumDifference;
        }
    }
}

