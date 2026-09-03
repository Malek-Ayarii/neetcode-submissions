class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character,Integer> map = new HashMap<>();
        boolean bool = true;
        if (s.length() != t.length())
            return false;
        
        for (int i=0;i<s.length();i++){
            char c = s.charAt(i);
            int currentCount = map.getOrDefault(c, 0);
            map.put(c, currentCount + 1);
        }
        for (int i=0;i<t.length();i++){
            char c = t.charAt(i);
            if(!map.containsKey(c) || map.get(c)==0){
                bool = false;
            }
            else{
                map.put(c,map.get(c)-1);
            }
        }
        return bool;
    }
}
