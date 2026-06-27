void __noreturn sub_6F8A0960(const char *a1, ...)
{
  char *v1; // eax@1
  char *v2; // eax@1
  va_list va; // [sp+24h] [bp+8h]@1

  va_start(va, a1);
  v1 = sub_6F8B19C0(2);
  fwrite("Mingw-w64 runtime failure:\n", 1u, 0x1Bu, (FILE *)v1);
  v2 = sub_6F8B19C0(2);
  vfprintf((FILE *)v2, a1, va);
  abort();
}
