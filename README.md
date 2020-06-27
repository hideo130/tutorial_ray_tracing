Ray Tracing in One Weekend Book Seriesを試すリポジトリ
リンク
https://github.com/RayTracing/raytracing.github.io

OpenMPを使ってfor文の並列化
```bash
brew install CLIUtils/apple/libomp
```
for文の前に次のコードを記述

```c
#pragma omp parallel
```