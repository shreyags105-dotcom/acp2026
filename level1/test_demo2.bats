#!/usr/bin/env bats

@test "finds maximum value" {
  result=$(printf "5\n3.5\n7.2\n1.0\n9.8\n4.4\n" | ./demo2)
  echo "$result" | grep -q "9.8"
}

@test "finds correct index" {
  result=$(printf "5\n3.5\n7.2\n1.0\n9.8\n4.4\n" | ./demo2)
  echo "$result" | grep -q "3"
}
