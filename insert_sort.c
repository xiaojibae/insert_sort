// list 为待排序序列
insertion_sort(list):
    // 从第 2 个元素开始遍历序列
    for i <- 2 to length(list):
        //记录要插入的目标元素
        insert_elem = list[i]
        //记录目标元素所在的位置
        position = i
        //从 position 所在位置向前遍历，直至找到一个比目标元素小的元素，目标元素插入到该元素之后的位置
        while position > 0 and list[position-1] > insert_elem:      // 此为升序排序，实现降序排序改为 list[position-1] < insert_elem
            //移动前一个元素的位置，将其向后移动一个位置
            list[position] = list[position-1]
            position = position - 1
        if(position != i):
            list[position] = insert_elem
    return list
