janus-tx --pset-file parameter_sets.csv --pset-id 1

janus-tx --pset-file parameter_sets.csv --pset-id 1 --stream-driver-args /tmp/test_janus.wav

janus-tx --pset-file parameter_sets.csv --pset-id 1 --stream-driver pulse --stream-driver-args "" --stream-fs 48000 --stream-format S16

