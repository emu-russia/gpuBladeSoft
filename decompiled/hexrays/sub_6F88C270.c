int sub_6F88C270(char *a1, size_t a2, const char *a3, ...)
{
  va_list va; // [sp+2Ch] [bp+10h]@1

  va_start(va, a3);
  return j__vsnprintf(a1, a2, a3, va);
}
