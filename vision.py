import pandas as pd

df = pd.read_csv("Mapping1 - TopLeft.csv")

df = df[['X', 'Y', 'n-1']]
df = df.dropna()

list1 = []
for i in range(len(df)):
    if (int(df['X'][i]) >= 600 ) & (int(df['Y'][i] >= 1650) & (int(df['X'][i]) <= 900 )):
        list1.append(i)

list2 = []
for i in list1:
    list2.append(int(df['n-1'][i]))

l = []
for i in df['n-1']:
    l.append(int(i))
print(list2)
print(len(list2))
