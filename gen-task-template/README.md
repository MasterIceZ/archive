# Task Generating Template

This template might be used with Linux only. (Others wasn't tested)

### Install requirement

To use ``gen.sh`` as a generation script. You might have ``pwgen`` (in linux).
```sh
$ sudo apt install pwgen
```

### Usage

To run ``gen.sh`` you may use command ``chmod +x gen.sh``. Since it should be execute with terminal which supports bash or shell script.

**This generator must be used with [OnlineJudge](https://github.com/QingdaoU/OnlineJudge)** since file format of this judge isn't as same as [Cafe Grader](https://github.com/cafe-grader-team/cafe-grader-web).

### File Format

``.in`` is a format for Input file.
``.out`` is a format for Output file.

### Move Task from Cafe Grader

You can execute this command below to transform all ``.sol`` to ``.out``.
```sh
$ for x in *.sol; do mv -- "$x" "${x%.sol}.out"; done
```
