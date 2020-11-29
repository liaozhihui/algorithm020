def isAnagram(s, t):
    """
    通过两个字符串分别生成对应得字典，判断这两个字典字符是否相等
    :param s:
    :param t:
    :return:
    """
    if len(s) != len(t):
        return False
    s_dict = {}
    t_dict = {}
    for i in s:
        if i not in s_dict:
            s_dict[i] = 1
        else:
            s_dict[i] += 1
    for i in t:
        if i not in t_dict:
            t_dict[i] = 1
        else:
            t_dict[i] += 1
    print(t_dict)
    print(s_dict)
    if s_dict == t_dict:
        return True
    return False