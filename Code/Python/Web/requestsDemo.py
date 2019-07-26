import requests

#Let's request the tall buildings information
response = requests.get("https://data.sfgov.org/resource/5kya-mfst.json")

#Let's check the response is OK (return code 200)
if(response.status_code == 200):
    #We will convert the response to json 
    tallBuildings = response.json()
    
    #we will read the first building in the response and print some information
    building = tallBuildings[1]
    print("Building Name:", building["name"])
    print("\tOccupancy: ", building["occupancy"])
    print("\tAddress: ", building["address"])
    

#Excercise 1: Print to the screen the list of buildings 
#including relevant information about the building like structure type
#occupancy, number of stories, , total area.
    print("\tStructure Type:", building["structural_types"])
    print("\tNo. Stories:", building["stories_above_grade"])
    print("\tTotal Area:", building["shape_area"])

#Excercise 2: Write the data from excercise 1 into a csv text file including latitude and longitude
import csv
row1 = ["Building Name: ", building["name"]]
row2 = ["Occupancy: ", building["occupancy"]]
with open('building.csv', 'w') as csvFile:
    writer = csv.writer(csvFile)
    writer.writerow(row1)
    writer.writerow(row2)
csvFile.close()

if(response.status_code == 200):
    #We will convert the response to json 
    tallBuildings = response.json()
    
    #we will read the first building in the response and print some information
    with open('buildings.csv', 'w') as csvFile:
        writer = csv.writer(csvFile)
        for building in tallBuildings:
            row1 = ["Building Name: ", building["name"]]
            row2 = ["Occupancy: ", building["occupancy"]]
            
            
            writer.writerow(row1)
            writer.writerow(row2)
        csvFile.close()
    
#Exercise 3: Can we get PGA from USGS API for each building and include it in the output file
#Let's request the PGA information
responsePGA = requests.get("https://earthquake.usgs.gov/nshmp-haz-ws/hazard/E2008/WUS/-118.25/34.05/PGA/760")
print (responsePGA.json())