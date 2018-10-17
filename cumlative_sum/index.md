# cumlative_sum

累積和やるやつ 

## 鉄道職員

Shinjirowくんは，シーエーシー鉄道に就職しました．  
シーエーシー鉄道には， <img src="https://latex.codecogs.com/gif.latex?N" /> 駅あり，それぞれの駅間 <img src="https://latex.codecogs.com/gif.latex?1&space;\leq&space;i&space;\leq&space;N-1" /> を電車が走る移動時間は <img src="https://latex.codecogs.com/gif.latex?a_i" /> 分です．  
Shinjirowくんはお客様サポートセンターの職員として今働いています．  
シーエーシー鉄道を利用する客からの質問に答える役割です．  
具体的には， <img src="https://latex.codecogs.com/gif.latex?l" /> 番目の駅から <img src="https://latex.codecogs.com/gif.latex?r" />番目の駅に移動するのにかかる移動時間が何分かを答える仕事をしています．  
お客さんは<img src="https://latex.codecogs.com/gif.latex?Q" /> 人やってきます．  
Shinjirowくんは，これをいちいち自力で計算するのは大変なので，その計算を行うプログラムを作って欲しいと考えています．  

なので，二つの駅が聞かれた時に，その移動時間を答えるプログラムを作ってください．  

### 制約

<img src="https://latex.codecogs.com/gif.latex?2&space;\leq&space;N&space;\leq&space;10^5" />  
<img src="https://latex.codecogs.com/gif.latex?1&space;\leq&space;a_i&space;\leq&space;10^5" />  
<img src="https://latex.codecogs.com/gif.latex?1&space;\leq&space;Q&space;\leq&space;10^5" />  
<img src="https://latex.codecogs.com/gif.latex?1&space;\leq&space;l&space;\leq&space;r&space;\leq&space;N" />  
入力は全て整数である．

### 入力

以下の形式で入力は与えられる．  
<img src="https://latex.codecogs.com/gif.latex?N" />  
<img src="https://latex.codecogs.com/gif.latex?a_1" /> <img src="https://latex.codecogs.com/gif.latex?a_2" /> <img src="https://latex.codecogs.com/gif.latex?a_3" /> ... <img src="https://latex.codecogs.com/gif.latex?a_N-1" />  
<img src="https://latex.codecogs.com/gif.latex?Q" />  
<img src="https://latex.codecogs.com/gif.latex?l_1" /> <img src="https://latex.codecogs.com/gif.latex?r_1" />  
<img src="https://latex.codecogs.com/gif.latex?l_2" /> <img src="https://latex.codecogs.com/gif.latex?r_2" />  
.  
.  
<img src="https://latex.codecogs.com/gif.latex?l_Q" /> <img src="https://latex.codecogs.com/gif.latex?r_Q" />  

### 出力形式

<img src="https://latex.codecogs.com/gif.latex?l" /> 駅から <img src="https://latex.codecogs.com/gif.latex?r" /> 駅に移動する際の移動時間を出力せよ．  

