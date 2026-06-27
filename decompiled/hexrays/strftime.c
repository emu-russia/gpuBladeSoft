size_t __cdecl strftime(char *Buf, size_t SizeInBytes, const char *Format, const struct tm *Tm)
{
  return strftime(Buf, SizeInBytes, Format, Tm);
}
