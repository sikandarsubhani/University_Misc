# Import necessary libraries
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
from imblearn.over_sampling import RandomOverSampler

# Define the column names for the dataset
cols = ["fLength", "fWidth", "fSize", "fConc", "fConc1", "fAsym", "fM3Long", "fM3Trans", "fAlpha", "fDist", "class"]

# Read the dataset from a CSV file and assign column names
df = pd.read_csv("magic04.data", names=cols)

# Display the first few rows of the dataset
df.head()

# Check the unique values in the 'class' column
df['class'].unique()

# Convert the 'class' column to binary (1 for 'g' and 0 for 'h')
df["class"] = (df["class"] == "g").astype(int)

# Display the first few rows of the modified dataset
df.head()

# Visualize the distribution of each feature for gamma ('g') and hadron ('h') classes
for label in cols[:-1]:
    plt.hist(df[df["class"]==1][label], color='blue', label='gamma', alpha=0.7, density=True)
    plt.hist(df[df["class"]==0][label], color='red', label='hadron', alpha=0.7, density=True)
    plt.title(label)
    plt.ylabel("Probability")
    plt.xlabel(label)
    plt.legend()
    plt.show()

# Split the dataset into training, validation, and test sets
train, valid, test = np.split(df.sample(frac=1), [int(0.6*len(df)), int(0.8*len(df))])

# Function to scale the dataset and perform oversampling if needed
def scale_dataset(dataframe, oversample=False):
    X = dataframe[dataframe.columns[:-1]].values
    y = dataframe[dataframe.columns[-1]].values

    # Standardize the features using StandardScaler
    scaler = StandardScaler()
    X = scaler.fit_transform(X)

    # If oversample is True, perform Random Over-Sampling to balance the classes
    if oversample:
        ros = RandomOverSampler()
        X, y = ros.fit_resample(X, y)

    # Combine the scaled features and the target variable
    data = np.hstack((X, np.reshape(y, (-1, 1))))

    return data, X, y

# Print the number of samples in each class for the training set
print(len(train[train['class']==1]))
print(len(train[train['class']==0]))

# Scale and oversample the training, validation, and test sets
train, X_train, y_train = scale_dataset(train, oversample=True)
valid, X_valid, y_valid = scale_dataset(valid, oversample=False)
test, X_test, y_test = scale_dataset(test, oversample=False)
