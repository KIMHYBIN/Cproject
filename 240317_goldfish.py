# 금붕어 문제 여러 풀이

# 주영이 풀이
import random
a = 1 #초기 금붕어 수
b = 0 #죽는 물고기 수
c = 0 #한 쌍당 낳는 물고기 수
d = 0 #낳은 물고기 수 전체
e = 0 #전체 물고기 수
f = 1 #턴 저장

c = random.randint(1,5)
e = a + c
print(f"1번째 턴입니다 물고기는 {e}입니다.")

while True: #턴 돌리기 위한 반복
    b = random.randint(1,5) # 매 턴 죽는 물고기
    for i in range(0, e):
        c = random.randint(1,5)
        d = d+c # e개만큼 나온 랜덤 c다 더하기
        c = 0 #c초기화
    e = a + d - b #전체 물고기 수 = 초기 물고기 + 낳은 물고기 - 죽은 물고기
    d = 0
    f = f + 1 #턴 넘기기 및 카운트
    print(f"{f}번째 턴입니다 물고기는 {e}마리 입니다.")
    if e > 500: #1000마리 이상일 시 종료
        print("어항이 가득 찼습니다.")
        break



# # 동준이 풀이
#     import random

# fish1 = input("금붕어 애칭 : ")  ## 금붕어 애칭 정해주기
# fish2 = input("짝꿍 애칭 : ")

# max = 2     ## 초기 물고기 전체 값
# adt = 2     ## 초기 성인 물고기 값
# turn = 1    ## 턴 횟수 체크
# while max < 1000:   ## 물고기가 1000마리 이하까지 참
#     if max == 2 :   ## 물고기가 2마리일때
#         born = (random.randint(2, 10)) * (adt / 2)  ## 출생어
#         max += born     ## 새끼 물고기 어항에 추가
#         turn += 1   ## 턴 증가

#     elif turn > 1:
#         adt = max   ## 어항의 모든 물고기 성인 물고기로
#         born = ((random.randint(1, 5)) * 2) * (adt / 2) ## 출생어
#         death = (random.randint(1, 5)) * 2
#         max += born     ## 새끼 물고기 어항에 추가
#         max -= death    ## 전체 물고기에서 랜덤한 쌍 죽이기
#         turn += 1   ## 턴 증가

# print("전체 물고기 수는 %d 마리입니다." % max)
# print("%d턴째에 1000마리를 넘습니다." % turn)


# ## 추가기능
# import random

# max = 2     ## 초기 물고기 전체 값
# adt = 2     ## 초기 성인 물고기 값
# turn = 1    ## 턴 횟수 체크
# while max < 2500:   ## 물고기가 2500마리 이하까지 참
#     if max == 2 :   ## 물고기가 2마리일때
#         born = (random.randint(2, 10)) * (adt / 2)  ## 출생어
#         max += born     ## 새끼 물고기 어항에 추가
#         turn += 1   ## 턴 증가

#     elif turn > 1:
#         adt = max   ## 어항의 모든 물고기 성인 물고기로
#         born = ((random.randint(1, 5)) * 2) * (adt / 2) ## 출생어
#         death = (random.randint(1, 5)) * 2
#         max += born     ## 새끼 물고기 어항에 추가
#         max -= death    ## 전체 물고기에서 랜덤한 쌍 죽이기
#         turn += 1   ## 턴 증가

#     nonum = int(max)
#     fish_port2 = []
#     n = 1
#     for i in range(0, 50):  ## 이차원 리스트를 만들어주기 위한 for문
#         fish_port = []
#         for j in range(0, 50):
#             if n <= nonum:
#                 fish_port.append(1)     ## n의 값이 전체 물고기수보다 작으면 1 넣어준다
#             else:
#                 fish_port.append(0)     ## if외에는 0 넣기
#             n += 1
#         fish_port2.append(fish_port)    ## j 50번이 끝나면 i열에 추가

#     for i in fish_port2:
#         for j in i:
#             print(f'{[j]}\t', end="")
#         print()
#     print("-" * 200)
# print("전체 물고기 수는 %d 마리입니다." % max)
# print("%d턴째에 2500마리를 넘습니다." % turn)


# 운하 풀이 - pdf파일로 디코에 올림



