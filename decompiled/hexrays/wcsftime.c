size_t __cdecl wcsftime(wchar_t *Buf, size_t SizeInWords, const wchar_t *Format, const struct tm *Tm)
{
  return wcsftime(Buf, SizeInWords, Format, Tm);
}
