class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = ""
        for s in strs:
            if s== "":
                return s
                
            if prefix == "":
                prefix = s
            else:
                newPrefix =""
                for i in range(min(len(prefix),len(s))):
                    if prefix[i] == s[i]:
                        newPrefix+=prefix[i]
                    else :
                        break
                prefix = newPrefix

                if prefix == "":
                    return ""
        return prefix
        