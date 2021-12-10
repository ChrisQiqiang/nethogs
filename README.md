# nethogs
本工具将nethogs的监控时间间隔修改为秒，达到更精细的网络监控。

- 下载 && build：

```
git clone http://github.com/chrisqiqiang/nethogs.git
cd nethogs
make
```

- 使用示例：以1s为间隔(-d 参数)监控本机器上python程序的传输量

```
nethogs -t -d 1  | grep python  > ~/net.log &
```

- 可以结合秒级的GPU监控使用：

```
nvidia-smi --query-gpu=timestamp,utilization.gpu,pcie.link.gen.current --format=csv --loop-ms=1000 -f ~/net.log &
```



