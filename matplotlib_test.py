# -*- coding: utf-8 -*-

import matplotlib.pyplot as plt
from pylab import *

def autolabel(rects):
    for rect in rects:
        height = rect.get_height()
        plt.text(rect.get_x()+rect.get_width()/2., 1.03*height, '%s' % float(height))

#plt.xlabel(u"性别")  # 标签
#plt.ylabel(u"人数")



plt.title(u"滩涂健康评价级别百分比")
plt.grid(True)
left = [1,2,3,4,5]
height = [20, 10, 36, 22, 13]

plt.xticks(left , (u"健康", u"良好",u"一般", u"较差", u"极差"))  # 每个矩形的标签

plt.bar(left, height, width=0.35, align="center")

#rect = plt.bar(left = (0,1),height = (1,0.5),width = 0.35,align="center",yerr=0.000001)

#plt.legend((rect,),(u"图例",))
#autolabel(rect)

plt.show()