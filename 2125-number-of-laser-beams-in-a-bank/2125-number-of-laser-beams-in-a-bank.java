class Solution {
    public int numberOfBeams(String[] bank) {
        List<Integer> list = new ArrayList<>();
        int ans = 0;
        for(String s: bank){
            int count = 0;
            for(char c: s.toCharArray())
                if(c == '1') count+=1;
            if(count != 0) list.add(count);
            if(list.size() == 2){
                ans += list.get(0)*list.get( 1);
                list.remove(0);
            }
        }
        return ans;
    }
}