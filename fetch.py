from selenium import webdriver
from selenium.webdriver.common.by import By

driver = webdriver.Chrome()
driver.get('https://www.geeksforgeeks.org/c-programming-examples/')
elements = driver.find_elements(By.XPATH, '//li//a')
links = [element.get_attribute('href') for element in elements]
start_index = links.index('https://www.geeksforgeeks.org/c-hello-world-program/')
end_index = links.index('https://www.geeksforgeeks.org/printing-source-code-c-program/') + 1
links = list(set(links[start_index:end_index]))
for link in links:
    driver.get(link)
    code_blocks = driver.find_elements(By.CSS_SELECTOR, 'div.container')
    if len(code_blocks) == 0:
        code_blocks = driver.find_elements(By.CSS_SELECTOR, 'pre')
    i = 0
    for block in code_blocks:
        if not 'main' in block.text:
            continue
        name = link[30:-1]
        if i > 0:
            name += f'-{i + 1}'
        with open(f'c/{name}.c', 'w') as f:
            f.write(block.text)
        i += 1
driver.quit()
