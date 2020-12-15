import collections
def maxSlidingWindow( nums, k):
    if len(nums) < 2:
        return nums
    queue = collections.deque()
    res = [0] * (len(nums) - k + 1)
    for i in range(len(nums)):
        # 保证从大到小 如果前面数小则需要依次弹出，直至满足要求
        while queue and nums[queue[-1]] <= nums[i]:
            queue.pop()
        queue.append(i)
        # 判断队首值是否有效
        if queue[0] <= i - k:
            queue.popleft()
        # 当窗口长度为k时 保存当前窗口中最大值
        if i + 1 >= k:
            res[i + 1 - k] = nums[queue[0]]
    return res

if __name__ == '__main__':
    nums=[1,3,-1,-2,-4,-5,-3,5,3,6,7];
    k=3
    maxSlidingWindow(nums,k)