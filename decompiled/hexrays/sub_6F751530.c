int sub_6F751530(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+2Ch] [bp+10h]@1

  va_start(va, a3);
  return j__vsnprintf((char *)a1, a2, a3, va);
}
