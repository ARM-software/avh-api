"""
    Arm API

    REST API to manage your virtual devices.  # noqa: E501

    The version of the OpenAPI document: 3.15.0-15704
    Generated by: https://openapi-generator.tech
"""


from setuptools import setup, find_packages  # noqa: H301

NAME = "avh-api"
VERSION = "1.0.5"
# To install the library, run the following
#
# python setup.py install
#
# prerequisite: setuptools
# http://pypi.python.org/pypi/setuptools

REQUIRES = [
  "urllib3 >= 1.25.3",
  "python-dateutil",
]

setup(
    name=NAME,
    version=VERSION,
    description="Arm API",
    author="OpenAPI Generator community",
    author_email="team@openapitools.org",
    url="",
    keywords=["OpenAPI", "OpenAPI-Generator", "Arm API"],
    python_requires=">=3.6",
    install_requires=REQUIRES,
    packages=find_packages(exclude=["test", "tests"]),
    include_package_data=True,
    long_description="""\
    REST API to manage your virtual devices.  # noqa: E501
    """
)
