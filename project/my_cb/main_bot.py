from selenium import webdriver
import time
chrome_browser = webdriver.Chrome(executable_path='E:\study\code\project\my_cb\chromedriver')
chrome_browser.get('https://web.whatsapp.com/')

time.sleep(15)

user_name = 'Priyanshu UIT'
user = chrome_browser.find_element_by_xpath('//span[@title="{}"]'.format(user_name))
user.click()

message_box = chrome_browser.find_element_by_xpath('//div[@class="_2A8P4"]')
message_box.send_keys('hey its a bot')


message_box = chrome_browser.find_element_by_xpath('//div[@class="EBaI7"]')
message_box.click()