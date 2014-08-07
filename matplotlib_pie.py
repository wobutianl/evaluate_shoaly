# -*- coding: utf-8 -*-
import matplotlib.pyplot as plt


# The slices will be ordered and plotted counter-clockwise.
labels = u"湿地", u"农用地", u"建设用地", u"工业用地", u"海域", u"滩涂"
sizes = [12,24, 10, 8, 16,30]
colors = ['yellowgreen', 'gold', 'lightskyblue', 'lightcoral', 'lightblue', 'grey']
explode = (0, 0.0, 0, 0, 0, 0.1) # only "explode" the 2nd slice (i.e. 'Hogs')

plt.title(u"1985不同土地类型百分比")

plt.pie(sizes, explode=explode, labels=labels, colors=colors,
        autopct='%1.1f%%', shadow=True, startangle=90)
# Set aspect ratio to be equal so that pie is drawn as a circle.
plt.axis('equal')
plt.show()