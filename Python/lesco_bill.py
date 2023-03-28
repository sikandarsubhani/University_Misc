#!/bin/python3
from selenium import webdriver
from selenium.webdriver.common.by import By
import time
from datetime import datetime as dt
import os
date = dt.now().strftime("%b-%Y")

def read(a,b,c):
	f = open("/home/sikandar/Bill/"+a+b+c+"/"+date+"/log.txt",'r',encoding = 'utf-8')
	print(f.read())
	f.close()
def write(a,b,c,driver):
    path="/home/sikandar/Bill/"+a+b+c+"/"+date
    os.makedirs(os.path.dirname(path+"/log.txt"), exist_ok=True)
    s_box1=driver.find_element(by=By.XPATH, value='//*[@id="ContentPane"]/form[1]/center/div/table/tbody/tr[2]/td[2]/input[1]').send_keys(a);
    s_box2=driver.find_element(by=By.XPATH, value='//*[@id="ContentPane"]/form[1]/center/div/table/tbody/tr[2]/td[2]/input[2]').send_keys(b);
    s_box3=driver.find_element(by=By.XPATH, value='//*[@id="ContentPane"]/form[1]/center/div/table/tbody/tr[2]/td[2]/input[3]').send_keys(c);
    menu_btn=driver.find_element(by=By.CSS_SELECTOR, value='#ContentPane > form:nth-child(2) > center > div > table > tbody > tr:nth-child(4) > td > p > input[type=submit]:nth-child(1)').click()
    view_btn=driver.find_element(by=By.XPATH,value='//*[@id="ContentPane"]/form/font/button').click()
    driver.execute_script('document.body.style.zoom="65%"')
    time.sleep(5)
    with open(path+'/'+date+'.png', 'wb') as file:
    #l = driver.find_element(by=By.XPATH, value='//*[@id="page1-div"]/img')
    	file.write(driver.find_element(by=By.XPATH, value='//*[@id="page1-div"]/img').screenshot_as_png)
    f = open(path+"log.txt",'w',encoding = 'utf-8')
    data = driver.find_element(by=By.CSS_SELECTOR, value='#page1-div > p:nth-child(2)')
    f.write("Dear, "+data.text + "\n")
    data = driver.find_element(by=By.CSS_SELECTOR, value='#page1-div > p:nth-child(194)')
    f.write("The amount of refrence id "+a+b+c+" is "+data.text + "\n")
    data = driver.find_element(by=By.CSS_SELECTOR, value='#page1-div > p:nth-child(200) > b')
    f.write("Due Date is : "+data.text + "\n")

    data = driver.find_element(by=By.CSS_SELECTOR, value='#page1-div > p:nth-child(194)')

    f.write("\nAmount\n Within Due Date : "+data.text + "\n")
    data = driver.find_element(by=By.CSS_SELECTOR, value='#page1-div > p:nth-child(196) > b')
    f.write(" After Due Date : "+data.text + "\n")
    f.close()
    
 # for linux/*nix, download_dir="/usr/Public"
def lesco(a,b,c):
    '''options = webdriver.ChromeOptions()
    options.add_experimental_option('prefs', {
    "download.default_directory": "/home/sikandar/Bill/"+a+b+c+"/"+date, #Change default directory for downloads
    "download.prompt_for_download": False, #To auto download the file
    "download.directory_upgrade": True,
    "plugins.always_open_pdf_externally": True #It will not show PDF directly in chrome
    })
    
    driver =webdriver.Chrome(options=options)'''
    driver =webdriver.Chrome()
    driver.get('http://www.lesco.gov.pk/Modules/CustomerBill/CheckBill.asp')
    write(a,b,c,driver)
    driver.quit()
    #rename(a,b,c);
    read(a,b,c)
   
    
    
if __name__ == '__main__':
    a=['0160107','0165200','0165202','0165210']
    for i in a:
	    print(i)
	    lesco('03','11225',i)
	    print("+---------------------------------------------+")
